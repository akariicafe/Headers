@interface WLImportContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long importCount;
@property (nonatomic) unsigned long long importErrorCount;
@property (nonatomic) unsigned long long size;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
