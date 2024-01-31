@class NSMutableData;
@protocol ASTConnection;

@interface ASTNetworkObject : NSObject

@property (retain, nonatomic) id<ASTConnection> connection;
@property (retain, nonatomic) NSMutableData *receivedData;

- (void).cxx_destruct;

@end
