@class NSString, NSArray, NSURL, NSData;

@interface MPServerObjectDatabaseAsset : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *hashedPersonID;
@property (readonly, nonatomic) long long flavor;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSData *miniSINF;
@property (readonly, copy, nonatomic) NSArray *sinfs;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 hashedPersonID:(id)a1 flavor:(long long)a2 url:(id)a3 miniSINF:(id)a4 sinfs:(id)a5;
- (id)initWithIdentifier:(id)a0 hashedPersonID:(id)a1 flavor:(long long)a2 url:(id)a3 miniSINF:(id)a4;
- (id)initWithIdentifier:(id)a0 hashedPersonID:(id)a1 flavor:(long long)a2 url:(id)a3 sinfs:(id)a4;
- (id)initWithSQLRowResult:(id)a0;

@end
