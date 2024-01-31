@class NSString;

@interface CLMiLoExportDatabaseTableResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *exportDir;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *sandboxExtensionTok;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExportDir:(id)a0 fileName:(id)a1 sandboxExtensionTok:(id)a2;

@end
