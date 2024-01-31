@class NSString, SIRINLUEXTERNALCDMNluRequest;

@interface FSFNluRequestFeature : NSObject <FSFFeature, BMStoreData> {
    unsigned int _dataVersion;
    SIRINLUEXTERNALCDMNluRequest *_content;
}

@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)content;
- (id)serialize;
- (id)json;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0 dataVersion:(unsigned int)a1;
- (id)initWithData:(id)a0 dataVersion:(unsigned int)a1;
- (id)interactionId;
- (id)getSerializedData;
- (id)initWithContentJson:(id)a0 dataVersion:(unsigned int)a1;

@end
