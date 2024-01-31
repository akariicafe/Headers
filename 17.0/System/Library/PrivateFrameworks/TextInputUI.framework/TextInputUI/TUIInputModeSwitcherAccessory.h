@class NSArray;

@interface TUIInputModeSwitcherAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *inputSourceIDs;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isInputSource;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)additionalComponents;
- (id)initWithInputSourceIDs:(id)a0 selectedIndex:(long long)a1;
- (id)initWithLanguages:(id)a0 selectedIndex:(long long)a1 actionHandler:(id /* block */)a2;

@end
