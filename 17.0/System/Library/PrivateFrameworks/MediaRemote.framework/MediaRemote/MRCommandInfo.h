@class _MRCommandInfoProtobuf, NSDictionary, NSData;

@interface MRCommandInfo : NSObject

@property (readonly, nonatomic) _MRCommandInfoProtobuf *protobuf;
@property (nonatomic) unsigned int command;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSDictionary *options;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSData *propertyListData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)commandInfosFromData:(id)a0;
+ (BOOL)isCommandActuallySupportedEvenWhenDisabled:(unsigned int)a0;
+ (id)dataFromCommandInfos:(id)a0;

- (id)initWithPropertyListData:(id)a0;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
