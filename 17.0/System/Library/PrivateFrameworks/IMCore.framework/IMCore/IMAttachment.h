@class NSString, NSDate;

@interface IMAttachment : NSObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL isSticker;
@property (nonatomic) BOOL isTransferComplete;
@property (retain, nonatomic) NSDate *createdDate;

- (id)description;
- (void).cxx_destruct;
- (id)fileTransfer;
- (id)initWithPath:(id)a0 guid:(id)a1;
- (id)initWithPath:(id)a0 guid:(id)a1 createdDate:(id)a2 isSticker:(BOOL)a3 isTransferComplete:(BOOL)a4;

@end
