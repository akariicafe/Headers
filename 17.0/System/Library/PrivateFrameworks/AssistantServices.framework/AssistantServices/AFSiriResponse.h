@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding> {
    NSUUID *_requestIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithRequest:(id)a0;
- (id)_initWithRequestIdentifier:(id)a0;
- (BOOL)_isForRequest:(id)a0;

@end
