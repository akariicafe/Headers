@class NSString;

@interface CKVAuxiliaryFilesystemBase : CKVFilesystemBase {
    NSString *_name;
    BOOL _isSaved;
}

+ (id)_savedBaseDirectoryURLWithName:(id)a0;
+ (BOOL)savedBaseExistsWithName:(id)a0;
+ (id)savedBaseWithName:(id)a0;
+ (id)temporaryBaseWithName:(id)a0;

- (void)remove;
- (id)save;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 isSaved:(BOOL)a1;

@end
