@class NSDictionary, NSString;

@interface DockKitCore.System : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ accessory;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ components;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDictionary *components;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessory:(id)a0 id:(long long)a1 type:(long long)a2 name:(id)a3;

@end
