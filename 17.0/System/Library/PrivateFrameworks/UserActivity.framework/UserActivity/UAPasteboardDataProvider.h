@class NSData, NSUUID, NSString;

@interface UAPasteboardDataProvider : NSObject <UAPasteboardItemProviding>

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(id)a1;
- (void)getDataWithCompletionBlock:(id /* block */)a0;

@end
