@class NSString, NSArray;

@interface GDKnosisExecStep : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *kgQueryNode;
@property (readonly, copy, nonatomic) NSString *indexQuery;
@property (readonly, copy, nonatomic) NSArray *messages;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKgQueryNode:(id)a0 indexQuery:(id)a1 messages:(id)a2;

@end
