@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)dictionary;
- (id)initFromDictionary:(id)a0;
- (id)initFlowDivertControlSocketWithParams:(BOOL)a0 order:(int)a1;
- (id)initFlowDivertDataSocket;
- (id)description;
- (void).cxx_destruct;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (unsigned long long)type;

@end
