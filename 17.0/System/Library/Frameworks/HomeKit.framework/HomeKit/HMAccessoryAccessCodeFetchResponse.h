@class HMAccessory, NSArray, NSError;

@interface HMAccessoryAccessCodeFetchResponse : NSObject

@property (readonly) HMAccessory *accessory;
@property (readonly, copy) NSArray *accessoryAccessCodes;
@property (retain) NSError *error;

+ (id)responseWithValue:(id)a0 accessory:(id)a1;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 accessoryAccessCodes:(id)a1 error:(id)a2;

@end
