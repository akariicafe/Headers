@interface PLSubmissionFileCE : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (id)fileType;
- (void)submit;
- (id)fileExtension;
- (BOOL)copyAndPrepareLog;
- (id)getCESQLFile;
- (BOOL)performCopyTablesToDB:(id)a0;
- (id)tablesToMigrateForCE;

@end
