cmake_minimum_required(VERSION 2.8.4)
project(someCPP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  ")
add_definitions(-std=c++11 )
#set(SOURCE_FILES  sp_polymorh/SpreadSheetCell.cpp sp_polymorh/StringSpreadSheetCell.cpp sp_polymorh/DoubleSpreadSheetCell.cpp sp_polymorh/DoubleSpreadSheetCell.h sp_polymorh/spp_main.cpp)
#set(SOURCE_FILES base/inheritance2.cpp)
#set(SOURCE_FILES spreadsheet/sp_main.cpp spreadsheet/SpreadSheetCell.cpp spreadsheet/SpreadSheet.cpp spreadsheet/SpreadSheet.cpp spreadsheet/Grid.h spreadsheet/Grid.cpp spreadsheet/Grid1.cpp spreadsheet/Grid1.h spreadsheet/GridChar.cpp spreadsheet/GridChar.h spreadsheet/GridContainer.cpp spreadsheet/GridContainer.h )
#set(SOURCE_FILES base/mult_inheritance.cpp )
#set(SOURCE_FILES base/milEstimator.cpp)
set(SOURCE_FILES  base/base2.cpp  base/FileError.h base/FileOpenError.cpp base/FileOpenError.cpp base/FileOpenError.h base/FileReadError.cpp base/FileReadError.h  base/MyArray.h)
#set (SOURCE_FILES errorCollrelator/Error.h errorCollrelator/ErrorCorrelator.cpp errorCollrelator/ErrorCorrelator.h errorCollrelator/ec_main.cpp)
#set(SOURCE_FILES base/base3.cpp )
#set(SOURCE_FILES base/base.cpp base/BaseClass.h base/BaseClass.cpp )
#set (SOURCE_FILES  roundRobin/RoundRobin.h roundRobin/Process.h roundRobin/Scheduler.cpp roundRobin/Scheduler.h  roundRobin/rr_main.cpp)
#set(SOURCE_FILES packetBuffer/PacketBuffer.h packetBuffer/IPPacket.h packetBuffer/pack_main.cpp)
#set(SOURCE_FILES bankAccount/bank_main.cpp bankAccount/BankAccount.h bankAccount/BankDB.cpp bankAccount/BankDB.h)
#set(SOURCE_FILES buddyList/BuddyList.cpp buddyList/BuddyList.h buddyList/buddies_main.cpp)
#set(SOURCE_FILES acl/acl_main.cpp acl/ACL.cpp acl/ACL.h)
#set(SOURCE_FILES  base/phoneBook.cpp)
#set(SOURCE_FILES cableChannels/channels_main.cpp cableChannels/CableCompany.cpp cableChannels/CableCompany.h)
#set(SOURCE_FILES base/auditVoter.cpp)
#set(SOURCE_FILES base/base4.cpp base/base4.cpp )
#set(SOURCE_FILES multithread/atomic.cpp)
#set(SOURCE_FILES multithread/atomic_fetch_add.cpp )
#set(SOURCE_FILES multithread/thread.cpp)
#set(SOURCE_FILES multithread/Counter.h multithread/thread_fun.cpp)
#set(SOURCE_FILES multithread/mutex_lock.cpp)
#set(SOURCE_FILES multithread/call_once.cpp)
#set(SOURCE_FILES multithread/mutex_example.cpp)
#set(SOURCE_FILES multithread/mutex_example_timed.cpp)
#set(SOURCE_FILES multithread/Logger.h multithread/Logger.cpp multithread/logger_demo.cpp )
set(CMAKE_EXE_LINKER_FLAGS -pthread)
add_executable(base_cpp  ${SOURCE_FILES})