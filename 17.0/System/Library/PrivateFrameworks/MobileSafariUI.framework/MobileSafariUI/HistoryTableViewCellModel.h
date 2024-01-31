@class NSString, NSURL;

@interface HistoryTableViewCellModel : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *identifier;

+ (id)urlForHistoryItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHistoryItem:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 url:(id)a2 identifier:(id)a3;

@end
