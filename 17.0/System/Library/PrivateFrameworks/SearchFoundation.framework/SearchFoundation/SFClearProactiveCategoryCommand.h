@class NSString, NSDictionary, NSData, SFTopic;

@interface SFClearProactiveCategoryCommand : SFCommand <SFClearProactiveCategoryCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char category : 1; unsigned char shouldClearWholeSection : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int category;
@property (nonatomic) BOOL shouldClearWholeSection;
@property (copy, nonatomic) NSString *proactiveIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasCategory;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasShouldClearWholeSection;

@end
