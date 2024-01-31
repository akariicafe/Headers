@class NSData, NSString;

@interface WFShortcutBookmarksDescriptor : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSString *path;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkflowID:(id)a0 path:(id)a1 bookmarkData:(id)a2;

@end
