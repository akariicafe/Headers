@class NSUUID;

@interface SignpostStackFrame : NSObject

@property (readonly, nonatomic) NSUUID *symbolOwnerUUID;
@property (readonly, nonatomic) unsigned long long offset;

- (id)initWithUUID:(id)a0 offset:(unsigned long long)a1;
- (id)_serializableArrayRepresentation;
- (id)initWithArrayRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
