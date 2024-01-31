@interface PTRowAction : NSObject <NSSecureCoding> {
    id /* block */ _handler;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEncodable;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)actionWithHandler:(id /* block */)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)defaultHandler;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)deselectsRowOnSuccess;

@end
