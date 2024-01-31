@class NSDictionary, NSData, NSString;

@interface SFCollectionStyleGrid : SFCollectionStyle <SFCollectionStyleGrid, NSSecureCoding, NSCopying> {
    struct { unsigned char numberOfColumns : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long initiallyVisibleCardSectionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasNumberOfColumns;

@end
