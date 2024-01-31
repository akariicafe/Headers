@class NSUUID;

@interface SPKeyIndexMap : NSObject

@property (readonly) NSUUID *beaconIdentifier;
@property (readonly) unsigned char sequence;
@property (readonly) struct { struct _sp_key_index_map *x0; unsigned long long x1; } *mapHandle;

- (id)init;
- (void)dealloc;
- (id)headerString;
- (id)initWithBeaconIdentifier:(id)a0 keySequence:(unsigned char)a1 mapHandle:(struct { struct _sp_key_index_map *x0; unsigned long long x1; } *)a2;
- (void).cxx_destruct;

@end
