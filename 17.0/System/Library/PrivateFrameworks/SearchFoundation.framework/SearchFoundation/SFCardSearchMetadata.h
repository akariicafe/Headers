@class NSString, NSDictionary, NSData;

@interface SFCardSearchMetadata : NSObject <SFCardSearchMetadata, NSSecureCoding, NSCopying> {
    struct { unsigned char isServerEntity : 1; unsigned char isFederatedDomainSearch : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isServerEntity;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *viewConfigName;
@property (nonatomic) BOOL isFederatedDomainSearch;
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
- (BOOL)hasIsFederatedDomainSearch;
- (BOOL)hasIsServerEntity;

@end
