@interface SABinaryLoadInfoTrackingHighestOffset : SABinaryLoadInfo {
    BOOL _isInKernelAddressSpace;
}

@property unsigned long long highestOffset;

- (BOOL)isInKernelAddressSpace;

@end
