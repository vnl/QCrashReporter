# QCrashReporter

# Debugging
1. Enable Debug in Release mode. [VS2015](https://msdn.microsoft.com/en-us/library/fsk896zz.aspx) and  [VS2017](https://docs.microsoft.com/en-us/cpp/build/reference/how-to-debug-a-release-build)
2. Get the version number of the application and the generated dmp file.
3. Place the executable, the generated pdb (from step 1) and the generated dmp file (from step 2) in the same folder.
4. Open the dmp file in Visual Studio, Click F5 to run debug to see the result.

# Road map
- [x] Ability to generate and save the dmp file.
- [ ] CHange the error message box to be more clean.
- [ ] Allow users to auto send crash reports

# Change log

## 0.0.1
- [x] First release