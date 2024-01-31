@class NSString;

@interface DYCAMetalLayerInfo : NSObject <DYCapturableObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long deviceAddress;
@property (readonly, nonatomic) unsigned long long layerAddress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long layerStreamRef;
@property (readonly, nonatomic) NSString *capturableObjectType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long streamRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
