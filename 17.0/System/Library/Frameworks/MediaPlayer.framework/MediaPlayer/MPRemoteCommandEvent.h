@class NSString, NSDictionary, MPRemoteCommandUserIdentity, MPRemoteCommand;

@interface MPRemoteCommandEvent : NSObject {
    NSDictionary *_mediaRemoteOptions;
    NSString *_contextID;
    NSString *_commandID;
}

@property (readonly, nonatomic) MPRemoteCommandUserIdentity *commandUserIdentity;
@property (readonly, nonatomic) unsigned int mediaRemoteCommandType;
@property (readonly, nonatomic) NSDictionary *mediaRemoteOptions;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSString *commandID;
@property (readonly, nonatomic) NSString *interfaceID;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) NSString *contentItemID;
@property (readonly, nonatomic) long long playbackQueueOffset;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) MPRemoteCommand *command;
@property (readonly, nonatomic) double timestamp;

+ (id)eventWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
