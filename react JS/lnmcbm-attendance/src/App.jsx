import { useState } from 'react'

import Attendance from './pages/Attendance'

function App() {
  const [count, setCount] = useState(0)

  return (
    <Attendance />
  )
}

export default App
