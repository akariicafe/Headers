@interface SNConnectionTypeInternal : NSObject {
    void /* unknown type, empty encoding */ connectionType;
}

- (id)init:(long long)a0;
- (id)init;
- (BOOL)isEdge;
- (BOOL)canUseWiFiDirectly;
- (BOOL)isWWAN;
- (long long)connectionTypeRawValue;
- (id)connectionTypeStringRawValue;

@end
