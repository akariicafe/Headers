@class NSString, INPerson;
@protocol WFPropertyListObject;

@interface WFContextualCallDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) unsigned long long callType;
@property (readonly, nonatomic) id<WFPropertyListObject> callTypeSerializedRepresentation;
@property (readonly, nonatomic) INPerson *person;
@property (readonly, nonatomic) id<WFPropertyListObject> personSerializedRepresentation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHandle:(id)a0 callType:(unsigned long long)a1 person:(id)a2 callTypeSerializedRepresentation:(id)a3 personSerializedRepresentation:(id)a4;

@end
