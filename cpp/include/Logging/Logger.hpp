#pragma once
#include <string>

class Logger
{
public:

    Logger(const std::string& fileLoc,
       const std::string& fileName);
       
    ~Logger();

    void SetFileLoc(const std::string& fileLoc);
    void SetFileName(const std::string& fileName);

    const std::string& GetFileLoc() const;
    const std::string& GetFileName() const; 

    void WriteToLog(const std::string& data);

private:

    std::string m_FileLoc;
    std::string m_FileName;

};