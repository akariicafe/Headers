@class NSString, NSArray, NSData;

@interface VFX.BindingImpl : _TtCs12_SwiftObject <VFX.VFXBinding> {
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ objectName;
    void /* unknown type, empty encoding */ bindingName;
    void /* unknown type, empty encoding */ userManual;
    void /* unknown type, empty encoding */ isPublic;
    void /* unknown type, empty encoding */ enumName;
    void /* unknown type, empty encoding */ enumCases;
    void /* unknown type, empty encoding */ property;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ objectID;
@property (nonatomic, copy) NSString *objectName;
@property (nonatomic, copy) NSString *bindingName;
@property (nonatomic, copy) NSString *userManual;
@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic) void /* unknown type, empty encoding */ semantic;
@property (nonatomic) void /* unknown type, empty encoding */ min;
@property (nonatomic) void /* unknown type, empty encoding */ max;
@property (nonatomic, copy) NSString *enumName;
@property (nonatomic, copy) NSArray *enumCases;
@property (nonatomic, copy) NSData *rawValue;

@end
