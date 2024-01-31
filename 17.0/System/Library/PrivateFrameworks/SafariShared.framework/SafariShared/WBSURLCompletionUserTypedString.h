@class NSString, NSArray;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _stringOnlyContainsWhitespaces;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;
@property (readonly, nonatomic) NSString *searchQueryParameterString;
@property (readonly, nonatomic) NSString *stringWithoutWhitespace;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) WBSURLCompletionUserTypedString *typedStringForURLMatching;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;

@end
