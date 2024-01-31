@class NSString;

@interface PSISynonymRecord : NSObject

@property (copy, nonatomic) NSString *synonym;
@property (nonatomic) short category;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithSynonym:(id)a0 category:(short)a1 identifier:(id)a2;

@end
