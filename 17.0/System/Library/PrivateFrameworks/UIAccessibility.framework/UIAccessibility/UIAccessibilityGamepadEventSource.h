@class NSString, NSMutableArray;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface UIAccessibilityGamepadEventSource : NSObject <_GCGamepadEventSource, _GCImplicitIPCObject> {
    NSMutableArray *_handlers;
}

@property (retain, nonatomic) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
