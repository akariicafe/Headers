@class NSString, NSDictionary;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSDictionary *extraProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)plistArchiveWithCPLArchiver:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCPLArchiver:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedString;
- (id)initWithSerializedString:(id)a0;

@end
