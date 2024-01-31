@interface MobileTimerSupport.MTSessionError : NSError {
    void /* unknown type, empty encoding */ descriptionString;
}

+ (id)withDescription:(id)a0;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithCoder:(id)a0;

@end
