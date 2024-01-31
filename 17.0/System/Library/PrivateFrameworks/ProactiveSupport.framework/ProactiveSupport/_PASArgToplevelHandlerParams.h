@class _PASArgParser, NSDictionary, NSArray;

@interface _PASArgToplevelHandlerParams : NSObject

@property (readonly, nonatomic) _PASArgParser *parser;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSArray *positionalArguments;

- (void).cxx_destruct;
- (id)initWithParser:(id)a0 options:(id)a1 positionalArguments:(id)a2;

@end
