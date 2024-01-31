@class NSUUID, NSData;

@interface HKWorkoutMirroringDataUpdate : NSObject

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 completion:(id /* block */)a1;

@end
