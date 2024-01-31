@class NSString;

@interface TCMPSImageAllocator : NSObject <MPSImageAllocator> {
    unsigned long long _format;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
