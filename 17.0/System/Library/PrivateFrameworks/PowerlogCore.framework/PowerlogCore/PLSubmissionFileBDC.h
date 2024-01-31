@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (id)fileType;
- (void)submit;
- (id)fileExtension;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
