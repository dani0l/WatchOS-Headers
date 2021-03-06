//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRPropertyXPCDaemonDelegate.h"

@class NSData, NSNumber, NSString, NSUUID;

@protocol NRPairedDeviceRegistryXPCDaemonDelegate <NRPropertyXPCDaemonDelegate>
- (void)xpcResumePairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcSuspendPairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcPairingShouldContinue;
- (void)xpcUnpairWithDeviceID:(NSUUID *)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(void (^)(NSError *, unsigned long long))arg3;
- (void)xpcNotifyPasscode:(NSNumber *)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcNotifyActivationCompleted:(NSUUID *)arg1 withSuccess:(_Bool)arg2;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcAbortPairing;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *, unsigned long long))arg2;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *, unsigned long long))arg2;
- (void)xpcCompanionPasscodePairWithDeviceID:(NSUUID *)arg1 operationHasBegun:(void (^)(NSError *, unsigned long long))arg2;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(NSString *)arg1 withOutOfBandPairingKey:(NSData *)arg2 operationHasBegun:(void (^)(NSError *, unsigned long long))arg3;
- (void)xpcQueryStatus:(NSUUID *)arg1 statusData:(void (^)(unsigned long long, NSDictionary *, NSUUID *, NRDevice *, _Bool, unsigned short, long long))arg2;
@end

