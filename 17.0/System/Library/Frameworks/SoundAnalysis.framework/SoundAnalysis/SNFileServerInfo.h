@class NSString;

@interface SNFileServerInfo : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ idsDeviceID;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *idsDeviceID;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 idsDeviceID:(id)a1 model:(id)a2 name:(id)a3;

@end
