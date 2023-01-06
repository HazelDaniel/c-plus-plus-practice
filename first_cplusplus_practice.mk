##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=first_cplusplus_practice
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/toughware/Documents/WEB_PROJECTS/PRACTICES/C-PLUS-PLUS/first-cplusplus-practice
ProjectPath            :=/home/toughware/Documents/WEB_PROJECTS/PRACTICES/C-PLUS-PLUS/first-cplusplus-practice
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=toughware
Date                   :=01/05/2023
CodeLitePath           :=/home/toughware/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="first_cplusplus_practice.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/hello-world.cpp$(ObjectSuffix) $(IntermediateDirectory)/favorite-number.cpp$(ObjectSuffix) $(IntermediateDirectory)/variable-sizes.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/hello-world.cpp$(ObjectSuffix): hello-world.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hello-world.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hello-world.cpp$(DependSuffix) -MM hello-world.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/toughware/Documents/WEB_PROJECTS/PRACTICES/C-PLUS-PLUS/first-cplusplus-practice/hello-world.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hello-world.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hello-world.cpp$(PreprocessSuffix): hello-world.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hello-world.cpp$(PreprocessSuffix) hello-world.cpp

$(IntermediateDirectory)/favorite-number.cpp$(ObjectSuffix): favorite-number.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/favorite-number.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/favorite-number.cpp$(DependSuffix) -MM favorite-number.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/toughware/Documents/WEB_PROJECTS/PRACTICES/C-PLUS-PLUS/first-cplusplus-practice/favorite-number.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/favorite-number.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/favorite-number.cpp$(PreprocessSuffix): favorite-number.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/favorite-number.cpp$(PreprocessSuffix) favorite-number.cpp

$(IntermediateDirectory)/variable-sizes.cpp$(ObjectSuffix): variable-sizes.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/variable-sizes.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/variable-sizes.cpp$(DependSuffix) -MM variable-sizes.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/toughware/Documents/WEB_PROJECTS/PRACTICES/C-PLUS-PLUS/first-cplusplus-practice/variable-sizes.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/variable-sizes.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/variable-sizes.cpp$(PreprocessSuffix): variable-sizes.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/variable-sizes.cpp$(PreprocessSuffix) variable-sizes.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


