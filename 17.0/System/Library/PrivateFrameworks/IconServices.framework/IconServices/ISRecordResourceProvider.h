@class NSString, LSRecord;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) LSRecord *record;
@property (readonly) NSString *fileExtension;
@property (retain) NSString *templateType;

- (id)symbol;
- (id)description;
- (void).cxx_destruct;
- (id)resourceNamed:(id)a0;
- (BOOL)_isAppleResource;
- (id)iconResource;
- (id)initWithRecord:(id)a0 fileExtension:(id)a1 options:(unsigned long long)a2;
- (id)initWithRecord:(id)a0 options:(unsigned long long)a1;
- (void)resolveResources;
- (void)setPlatformWithBundle:(id)a0;
- (id)templateIconResource;

@end
