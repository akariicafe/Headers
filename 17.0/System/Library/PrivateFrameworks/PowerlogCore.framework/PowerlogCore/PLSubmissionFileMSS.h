@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (id)fileType;
- (void)submit;
- (id)fileExtension;
- (id)mssTextFilePath;
- (BOOL)collectMSS;
- (BOOL)copyAndPrepareLog;
- (BOOL)flushMicrostackshots;
- (BOOL)generateMSS;
- (id)getFileList;
- (BOOL)packageDirectory:(id)a0 to:(id)a1;

@end
