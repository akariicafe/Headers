@class NSArray, RESerializedPayload, NSObject;
@protocol OS_xpc_object;

@interface RESharedMemoryMeshPayload : RESharedResourcePayload <REMeshPayload> {
    NSObject<OS_xpc_object> *_data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *parts;
@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) NSArray *instances;
@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (copy, nonatomic) id /* block */ serializedDataBlock;
@property (retain, nonatomic) RESerializedPayload *serializedData;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)bufferWithDevice:(id)a0;
- (id)initWithData:(id)a0 parts:(id)a1 models:(id)a2 instances:(id)a3;

@end
