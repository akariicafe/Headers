@class NSString;

@interface __NSConcreteUUID : _NSUUIDBridge {
    void /* unknown type, empty encoding */ _storage;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *UUIDString;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class classForCoder;

- (id)init;
- (id)initWithUUIDBytes:(const char *)a0;
- (id)initWithUUIDString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getUUIDBytes:(char *)a0;

@end
