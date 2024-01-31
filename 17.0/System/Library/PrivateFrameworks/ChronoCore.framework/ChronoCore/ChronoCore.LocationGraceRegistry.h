@interface ChronoCore.LocationGraceRegistry : _TtCs12_SwiftObject <BSSharedMemoryStoreData> {
    void /* unknown type, empty encoding */ timeoutByIdentifier;
}

@property (nonatomic, readonly) long long serializedDataLength;

+ (id)deserializeFromReader:(id /* block */)a0;

- (BOOL)serializeToWriter:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
