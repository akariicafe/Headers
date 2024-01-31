@class NSArray;

@interface TUIDictationAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *languages;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)additionalComponents;
- (id)initWithLanguages:(id)a0 actionHandler:(id /* block */)a1;

@end
