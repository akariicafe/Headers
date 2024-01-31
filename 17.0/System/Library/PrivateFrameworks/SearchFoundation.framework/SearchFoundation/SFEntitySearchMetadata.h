@class NSString, NSDictionary, NSData;

@interface SFEntitySearchMetadata : NSObject <SFEntitySearchMetadata, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *entitySearchQuery;
@property (copy, nonatomic) NSString *tokenQuery;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (copy, nonatomic) NSString *viewConfigName;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
