import React, { useState } from "react";

const students = [
  { rollNo: 24301, name: "PRIYANKA KUMARI" },
  { rollNo: 24302, name: "JYOTI KUMARI" },
  { rollNo: 24303, name: "PRASHANT SINGH" },
  { rollNo: 24304, name: "MANISH KUMAR" },
  { rollNo: 24305, name: "SHIVAM KUMAR" },
  { rollNo: 24306, name: "KUMARI ANJALI" },
  { rollNo: 24307, name: "KUMARI PRIYANKA" },
  { rollNo: 24308, name: "KUMARI JYOTI" },
  { rollNo: 24309, name: "KUMARI ANJALI" },
  { rollNo: 24311, name: "RAHUL KUMAR" },
  { rollNo: 24312, name: "NITESH KUMAR" },
  { rollNo: 24316, name: "SHIVAM KUMAR" },
  { rollNo: 24310, name: "SACHIN KUMAR" },
  { rollNo: 24313, name: "RAHUL KUMAR" },
  { rollNo: 24314, name: "NITESH KUMAR" },
  { rollNo: 24315, name: "SACHIN KUMAR" },
  { rollNo: 24317, name: "PRIYANKA KUMARI" },
  { rollNo: 24318, name: "JYOTI KUMARI" },
];

export default function Attendance() {
  const [date, setDate] = useState("");
  const [search, setSearch] = useState("");
  const [attendance, setAttendance] = useState(
    students.reduce((acc, student) => {
      acc[student.rollNo] = false;
      return acc;
    }, {})
  );

  const handleAttendanceChange = (rollNo, status) => {
    setAttendance({ ...attendance, [rollNo]: status });
  };

  const handleSubmit = () => {
    console.log("Attendance Data:", { date, attendance });
    alert("Attendance submitted successfully!");
  };

  const filteredStudents = students.filter(
    (student) =>
      student.name.toLowerCase().includes(search.toLowerCase()) ||
      student.rollNo.toString().includes(search)
  );

  return (
    <div className="p-8 max-w-2xl mx-auto">
      <header className="text-center text-red-600 font-bold text-2xl">
        <h1>L.N MISHRA COLLEGE OF BUSINESS MANAGEMENT</h1>
      </header>

      <div className="bg-white p-4 shadow rounded-lg">
        <h2 className="text-2xl font-bold mb-4 text-center">Student Attendance of MCA II(A)</h2>

        <label className="block font-medium mb-1">Date:</label>
        <input
          id="date"
          type="date"
          value={date}
          onChange={(e) => setDate(e.target.value)}
          className="border p-2 rounded w-full mb-4"
        />

        <input
          type="text"
          placeholder="Search by Name or Roll No."
          value={search}
          onChange={(e) => setSearch(e.target.value)}
          className="border p-2 rounded w-full mb-4"
        />

        <table className="w-full border-collapse border border-gray-300">
          <thead>
            <tr className="bg-gray-200">
              <th className="text-center p-2 border">ROLL No.</th>
              <th className="text-center p-2 border">NAME</th>
              <th className="text-center p-2 border">ATTENDANCE</th>
            </tr>
          </thead>
          <tbody>
            {filteredStudents.map((student) => (
              <tr key={student.rollNo} className="border">
                <td className="p-2 border text-center">{student.rollNo}</td>
                <td className="p-2 border text-center">{student.name}</td>
                <td className="text-center p-2 border flex justify-center gap-2">
                  <button
                    className={`p-2 rounded-lg text-white w-20 ${attendance[student.rollNo] ? "bg-blue-500" : "bg-gray-300"}`}
                    onClick={() => handleAttendanceChange(student.rollNo, true)}
                  >
                    Present
                  </button>
                  <button
                    className={`p-2 rounded-lg text-white w-20 ${!attendance[student.rollNo] ? "bg-red-500" : "bg-gray-300"}`}
                    onClick={() => handleAttendanceChange(student.rollNo, false)}
                  >
                    Absent
                  </button>
                </td>
              </tr>
            ))}
          </tbody>
        </table>

        <button
          onClick={handleSubmit}
          className="mt-4 w-full bg-blue-500 text-white p-2 rounded-lg hover:bg-blue-600"
        >
          Submit Attendance
        </button>
      </div>
    </div>
  );
}
