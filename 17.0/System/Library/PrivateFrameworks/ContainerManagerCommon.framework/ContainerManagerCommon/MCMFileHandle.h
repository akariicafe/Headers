@class NSError, NSString, NSNumber;
@protocol MCMFileHandle_Private;

@interface MCMFileHandle : NSObject <MCMFileHandle_Private, MCMFileHandle>

@property (retain, nonatomic) id<MCMFileHandle_Private> relativeToFileHandle;
@property (retain, nonatomic) NSError *openError;
@property (nonatomic, getter=isOpen) BOOL open;
@property (readonly, nonatomic) int flags;
@property (nonatomic) BOOL invalid;
@property (nonatomic) int fd;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) unsigned long long symlinks;
@property (readonly, nonatomic) BOOL openLazily;
@property (readonly, nonatomic) unsigned short createMode;
@property (readonly, nonatomic) NSNumber *createDPClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)openWithError:(id *)a0;
- (id)copyValueAsUUIDFromXattr:(id)a0 error:(id *)a1;
- (int)_computeFlags;
- (unsigned short)_computeMode;
- (int)_openAbsolute;
- (int)_openRelative;
- (id)copyValueAsNumberFromXattr:(id)a0 error:(id *)a1;
- (id)copyValueAsStringFromXattr:(id)a0 maxLength:(unsigned long long)a1 error:(id *)a2;
- (BOOL)expectOpenWithError:(id *)a0;
- (id)initWithPath:(id)a0 relativeToFileHandle:(id)a1 direction:(unsigned long long)a2 symlinks:(unsigned long long)a3 createMode:(unsigned short)a4 createDPClass:(id)a5 openLazily:(BOOL)a6;
- (BOOL)removeXattr:(id)a0 error:(id *)a1;
- (BOOL)setPermissions:(unsigned short)a0 andOwner:(id)a1 error:(id *)a2;
- (BOOL)setXattr:(id)a0 valueAsNumber:(id)a1 error:(id *)a2;
- (BOOL)setXattr:(id)a0 valueAsString:(id)a1 error:(id *)a2;
- (BOOL)setXattr:(id)a0 valueAsUUID:(id)a1 error:(id *)a2;
- (BOOL)withOpenFileDoBlock:(id /* block */)a0;

@end
